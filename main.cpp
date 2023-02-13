#include <stdio.h>

int main()
{
    int d,m,y;
    printf("Day = ");
	scanf("%i",&d);
	printf("Month = ");
	scanf("%i",&m);
	printf("Year = ");
	scanf("%i",&y);
	printf("==============================\n");
	if(y%4)
		printf("Non-leap year(nevisokosniy)\n");
	else 
	{
		printf("Leap year(visokosniy)\n");
	}
	printf("==============================\n");
	switch(y%12)
	{
	  	case 0:
		    printf("YEAR: Monkey(Obeziyana)\n");
		    break;
	  	case 1:
		    printf("YEAR: Chicken(Kurica)\n");
		    break;
	  	case 2:
		    printf("YEAR: Dog(Sobaka)\n");
		    break;
	  	case 3:
		    printf("YEAR: Pig(Svinia)\n");
		    break;
	  	case 4:
		    printf("YEAR: Rat(Krisa)\n");
		    break;
	  	case 5:
		    printf("YEAR: Bull(Bik).\n");
		    break;
	  	case 6:
		    printf("YEAR: Tiger(Tigr)\n");
		    break;
	  	case 7:
		    printf("YEAR: Rabbit(Krolik)\n");
		    break;
	  	case 8:
		    printf("YEAR: Dragon(Drakon)\n");
		    break;
	  	case 9:
		    printf("YEAR: Snake(Zmeya)\n");
		    break;
	  	case 10:
		    printf("YEAR: Horse(Loshadi)\n");
		    break;
	  	case 11:
		    printf("YEAR: Goat(Kozla)\n");
		    break;
	}
	printf("==============================\n");
	switch (m)
	{
	    case 1:
	            if (d <20)
	                printf("HOROSCOPE: Capricorn(Kozerog)");
	            else printf("HOROSCOPE: Aquarius(Vodoley)");
	            break;
	    case 2:
	           if (d <19)
	                printf("HOROSCOPE: Aquarius(Vodoley)");
	            else printf("HOROSCOPE: Pisces(Riba)");
	            break;
	    case 3:
	            if (d <20)
	                printf("HOROSCOPE: Pisces(Riba)");
	            else printf("HOROSCOPE: Aries(Oven)");
	            break;
	    case 4:
	            if (d <20)
	                printf("HOROSCOPE: Aries(Oven)");
	            else printf("HOROSCOPE: Taurus(Telec)");
	            break; 
	    case 5:
	            if (d <21)
	                printf("HOROSCOPE: Taurus(Telec)");
	            else printf("HOROSCOPE: Gemini(Blizneci)");
	            break;
	    case 6:
	            if (d <21)
	                printf("HOROSCOPE: Gemini(Blizneci)");
	            else printf("HOROSCOPE: Cancer(Rak)");
	            break;
	    case 7: 
	            if (d <22)
	                printf("HOROSCOPE: Cancer(Rak)");
	            else printf("HOROSCOPE: Leo(Lev)");
	            break;
	    case 8: 
	            if (d <23)
	                printf("HOROSCOPE: Leo(Lev)");
	            else printf("HOROSCOPE: Virgo(Deva)");
	            break;
	    case 9:
	            if (d <23)
	                printf("HOROSCOPE: Virgo(Deva)");
	            else printf("HOROSCOPE: Libra(Vesi)");
	            break;
	    case 10:
	            if (d <23)
	                printf("HOROSCOPE: Libra(Vesi)");
	            else printf("HOROSCOPE: Skorpio(Skorpion)");
	            break;
	    case 11:
	            if (d <22)
	                printf("HOROSCOPE: Skorpio(Skorpion)");
	            else printf("HOROSCOPE: Sagittarius(Strelec)");
	            break;
	    case 12: 
	            if (d <21)
	                printf("HOROSCOPE: Sagittarius(Strelec)");
	            else printf("HOROSCOPE: Capricorn(Kozerog)");
	}
	printf("\n==============================");
	return 0;
}
