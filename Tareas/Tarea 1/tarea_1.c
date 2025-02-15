#include <stdio.h>
#include <stdlib.h>
#include <hpdf.h>

int main() {
    HPDF_Doc pdf;
    HPDF_Page page;
    HPDF_Font font;
    HPDF_Image image;

    // Crear un documento PDF
    pdf = HPDF_New(NULL, NULL);
    if (!pdf) {
        printf("Error al crear el documento PDF.\n");
        return 1;
    }

    // Crear una página
    page = HPDF_AddPage(pdf);

    // Establecer la fuente
    font = HPDF_GetFont(pdf, "Helvetica", NULL);
    HPDF_Page_SetFontAndSize(page, font, 24);

    // Escribir texto en la página
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, 50, 750, "Texto antes de la imagen.");
    HPDF_Page_EndText(page);

    // Cargar la imagen (asegúrate de que la ruta sea correcta)
    image = HPDF_LoadJpgImageFromFile(pdf, ".");  // Usa HPDF_LoadJpegImageFromFile para JPEG
    image = HPDF_LoadJpgImageFromFile(pdf, "imagen.png");  // Usa HPDF_LoadJpegImageFromFile para JPEG
    image = HPDF_LoadJpgImageFromFile(pdf, "imagen.png");  // Usa HPDF_LoadJpegImageFromFile para JPEG

    // Establecer las coordenadas para la imagen
    float x = 50, y = 500;

    // Dibujar la imagen en el PDF
    HPDF_Page_DrawImage(page, image, x, y, 200, 150);  // Ancho y alto de la imagen

    // Guardar el archivo PDF
    HPDF_SaveToFile(pdf, "output_con_imagen.pdf");

    // Liberar la memoria
    HPDF_Free(pdf);

    printf("PDF con imagen creado exitosamente.\n");
    return 0;
}
