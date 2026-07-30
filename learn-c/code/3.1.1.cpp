#include <stdio.h>

int main()
{
    int month = 4;
	switch (month)
	{
	    case 3:
	    case 4:
	    case 5:
	        printf("´º¼¾\n");
	        break;
	    case 6:
	    case 7:
	    case 8:
	        printf("ÏÄ¼¾\n");
	        break;
	    case 9:
	    case 10:
	    case 11:
	        printf("Çï¼¾\n");
	        break;
	    case 12:
	    case 1:
	    case 2:
	        printf("¶¬¼¾\n");
	        break;
	    default:
	        printf("ÎÞÐ§ÔÂ·Ý\n");
	}

    return 0;
}
