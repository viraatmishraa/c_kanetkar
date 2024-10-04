//In the digital world colors are specified in Red-Green-Blue (RGB) format, with values of R, G, B varying on an integer scale from 0 to 255.
// In print publishing, the colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format, with values of C, M, Y, K varying on a real scale from 0.0 to 1.0. Write a program that helps a user to convert RGB color values to CMYK color as per the following formulas: - 
// White = max(Red/255, Green/255, Blue/255) 
// Cyan = (White - Red/255) 
// White - Magenta = (White - Green/255) 
// White - Yellow = (White - Blue/255) 
// White - Black = 1 - White 
//Note that if the RGB values are all 0, then the CMY values are all 0 and K is 1.0. */
#include <stdio.h>
#include <stdlib.h>
float max(float red, float green, float blue)
{
    if(red>=green && red>=blue && red<=255.0)
    return (red);
    
    if(blue>=red && blue>=green && blue<=255.0)
    return (blue);
    if(green>=blue && green>=red && green<=255.0)
    return (green);
    else { printf("\ninvalid input\n"); return 0;}
    
}
void main()
{
    int r,g,b;
    float magenta=0,cyan=0, yellow=0,black=0,white=1;
    printf("\nenter the r g b:\n");
    if(scanf("%d%d%d",&r,&g,&b))
    {   if((r*g*b>=1))
    {
        white=max(r,g,b);
        if (white==0.0)
        exit(0);
        white=white/255;
        cyan=(white-(r/255.0))/white;
        yellow=(white-(b/255.0))/white;
        magenta=(white-(g/255.0))/white;
        printf("%f %f %f",cyan,yellow,magenta);
        black=0;
    }
    else
    {
        black=1.0;
    }
    printf("the rgb conversion to cmyk is:");
    printf("\n c- %5.2f m- %5.2f y- %5.2f k-%5.2f",cyan,magenta,yellow,black);
    }
    else
    printf("invalid input");
    
}