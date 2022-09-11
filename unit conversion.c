#include<stdio.h>
void main()
{
    int ch1,ret;
    printf("\t\t\tWelcome to UNIT CONVERTER\n   ");
    do{
    printf("\n  Please choose your category of units\n");
    printf("1.Length or Distance\n2.Temperature\n3.Weight\n4.Speed\n5.Time\n6.liquid\n7.exit\n");
    printf("\nPlease enter the Serial Number of your category : ");
    scanf("%d",&ch1);
    switch(ch1)
    {
    case 1:
        ret = length();
        break;
    case 2:
        ret = temperature();
        break;
    case 3:
        ret = weight();
        break;
    case 4:
        ret = speed();
        break;
    case 5:
        ret = time();
        break;
    case 6:
        ret = liquid();
        break;
    case 7:
           exit(0);
        break;
    default:
        printf("\nThe category selected is not yet included. Sorry for the inconvenience.");
        break;
    }
    }while(1);
}
int length(){
    float mm,cm,m,km;
    int ch2;
    printf("\n The selected category is LENGTH or DISTANCE\n");
    printf("\nAvailable options in LENGTH or DISTANCE : ");
    printf("\n1.Millimeter to Centimeter\n2.Millimeter to Meter\n3.Millimeter to Kilometer");
    printf("\n4.Centimeter to Millimeter\n5.Centimeter to Meter\n6.Centimeter to Kilometer");
    printf("\n7.Meter to Millimeter\n8.Meter to Centimeter\n9.Meter to Kilometer");
    printf("\n10.Kilometer to Millimeter\n11.Kilometer to Centimeter\n12.Kilometer to Meter");
    printf("\nPlease choose your option : ");
    scanf("%d",&ch2);
    switch(ch2)
    {
    case 1:
        printf("\nEnter your length or distance in Millimeter : ");
        scanf("%f",&mm);
        cm = mm/10;
        printf("\n%f Millimeters = %.3f Centimeters\n",mm,cm);
        break;
    case 2:
        printf("\nEnter your length or distance in Millimeter : ");
        scanf("%f",&mm);
        m = mm/1000;
        printf("\n%f Millimeters = %.3f Meters\n",mm,m);
        break;
    case 3:
        printf("\nEnter your length or distance in Millimeter : ");
        scanf("%f",&mm);
        km = mm/1000000;
        printf("\n%f Millimeters = %.3f Kilometers\n",mm,km);
        break;
    case 4:
        printf("\nEnter your length or distance in Centimeter : ");
        scanf("%f",&cm);
        mm = cm*10;
        printf("\n%f Centimeters = %.3f Millimeters\n",cm,mm);
        break;
    case 5:
        printf("\nEnter your length or distance in Centimeter : ");
        scanf("%f",&cm);
        m = cm/100;
        printf("\n%f Centimeters = %.3f Meters\n",cm,m);
        break;
    case 6:
        printf("\nEnter your length or distance in Centimeter : ");
        scanf("%f",&cm);
        km = cm/100000;
        printf("\n%f Centimeters = %.3f Kilometers\n",cm,km);
        break;
    case 7:
        printf("\nEnter your length or distance in Meter : ");
        scanf("%f",&m);
        mm=m*1000;
        printf("\n%f Meters = %.3f Millimeters\n",m,mm);
        break;
    case 8:
        printf("\nEnter your length or distance in Meter : ");
        scanf("%f",&m);
        cm=m*100;
        printf("\n%f Meters = %.3f Centimeters\n",m,cm);
        break;
    case 9:
        printf("\nEnter your length or distance in Meter : ");
        scanf("%f",&m);
        km=m/1000;
        printf("\n%f Meters = %.3f Kilometers\n",m,km);
        break;
    case 10:
        printf("\nEnter your length or distance in Kilometer : ");
        scanf("%f",&km);
        mm=km*1000000;
        printf("\n%f Kilometers = %f Millimeters\n",km,mm);
        break;
    case 11:
        printf("\nEnter your length or distance in Kilometer : ");
        scanf("%f",&km);
        cm=km*100000;
        printf("\n%f Kilometers = %f Centimeters\n",km,cm);
        break;
    case 12:
        printf("\nEnter your length or distance in Kilometer : ");
        scanf("%f",&km);
        m=km*1000;
        printf("\n%f Kilometers = %f Meters\n",km,m);
        break;
    default:
        printf("\nThe category selected is not yet included. Sorry for the inconvenience.");
        break;
    }
    return 0;
}
int temperature()
{
    float c,f,k;
    int ch3;
    printf("\nThe selected category is TEMPERATURE");
    printf("\nAvailable options in TEMPERATURE : ");
    printf("\n1.°Celsius to °Fahrenheit\n2.°Celsius to Kelvin\n3.°Fahrenheit to °Celsius");
    printf("\n4.°Fahrenheit to Kelvin\n5.Kelvin to °Celsius\n6.Kelvin to °Fahrenheit");
    printf("\nPlease enter the Serial Number of your category : ");
    scanf("%d",&ch3);
    switch(ch3)
    {
    case 1:
        printf("\nEnter your temperature in °Celsius : ");
        scanf("%f",&c);
        f=(c*9/5)+32;
        printf("\n%f °Celsius = %.3f °Fahrenheit\n",c,f);
        break;
    case 2:
        printf("\nEnter your temperature in °Celsius : ");
        scanf("%f",&c);
        k=c+273;
        printf("\n%f °Celsius = %.3f Kelvin\n",c,k);
        break;
    case 3:
        printf("\nEnter your temperature in °Fahrenheit : ");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("\n%f °Fahrenheit = %.3f °Celsius\n",f,c);
        break;
    case 4:
        printf("\nEnter your temperature in °Fahrenheit : ");
        scanf("%f",&f);
        k=((f-32)*5/9)+273;
        printf("\n%f °Fahrenheit = %.3f Kelvin\n",f,k);
        break;
    case 5:
        printf("\nEnter your temperature in Kelvin : ");
        scanf("%f",&k);
        c=k-32;
        printf("\n%f Kelvin = %.3f °Celsius\n",k,c);
        break;
    case 6:
        printf("\nEnter your temperature in Kelvin : ");
        scanf("%f",&k);
        f=(k-273)*32+9/5;
        printf("\n%f Kelvin = %.3f °Fahrenheit\n",k,f);
        break;
    default:
        printf("\nThe category selected is not yet included. Sorry for the inconvenience.");
        break;
    }
    return 0;
}
int weight()
{
    float mg,g,kg;
    int ch4;
    printf("\nThe selected category is WEIGHT");
    printf("\nAvailable options in WEIGHT : ");
    printf("\n1.Milligram to Gram\n2.Milligram to Kilogram\n3.Gram to Milligram");
    printf("\n4.Gram to Kilogram\n5.Kilogram to Milligram\n6.Kilogram to gram");
    printf("\nPlease choose your option : ");
    scanf("%d",&ch4);
    switch(ch4)
    {
    case 1:
        printf("\nEnter your weight in Milligrams : ");
        scanf("%f",&mg);
        g=mg/1000;
        printf("\n%f Milligrams = %.3f Grams\n",mg,g);
        break;
    case 2:
        printf("\nEnter your weight in Milligrams : ");
        scanf("%f",&mg);
        kg=mg/1000000;
        printf("\n%f Millograms = %.3f Kilograms\n",mg,kg);
        break;
    case 3:
        printf("\nEnter your weight in Grams : ");
        scanf("%f",&g);
        mg=g*1000;
        printf("\n%f Grams = %.3f Milligrams\n",g,mg);
        break;
    case 4:
        printf("\nEnter your weight in Grams : ");
        scanf("%f",&g);
        kg=g/1000;
        printf("\n%f Grams = %.3f Kilograms\n",g,kg);
        break;
    case 5:
        printf("\nEnter your weight in Kilograms : ");
        scanf("%f",&kg);
        mg=kg*1000000;
        printf("\n%f Kilograms = %.3f Milligrams\n",kg,mg);
        break;
    case 6:
        printf("\nEnter your weight in Kilograms : ");
        scanf("%f",&kg);
        g=kg*1000;
        printf("\n%f Kilograms = %.3f Grams\n",kg,g);;
        break;
    default:
        printf("\nThe category selected is not yet included. Sorry for the inconvenience.");
        break;
    }
   return 0;
}
int speed()
{
    float ms,kmph,mph;
    int ch5;
    printf("\nThe selected category is SPEED");
    printf("\nAvailable options in SPEED : ");
    printf("\n1.Metres per Second to Kilometers per hour\n2.Metres per Second to Miles per hour");
    printf("\n3.Kilometers per hour to Metres per second\n4.Kilometres per hour to Miles per hour");
    printf("\n5.Miles per hour to Metre per second\n6.Miles per hour to Kilometre per hour");
    printf("\nPlease choose your option : ");
    scanf("%d",&ch5);
    switch(ch5)
    {
    case 1:
        printf("\nEnter your speed in Metre per second : ");
        scanf("%f",&ms);
        kmph=ms*3.6;
        printf("\nMetre per second = %.3f Kilometres per hour\n",ms,kmph);
        break;
    case 2:
        printf("\nEnter your speed in Metre per second : ");
        scanf("%f",&ms);
        mph=ms*2.237;
        printf("\n%f Metres per second = %.3f Miles per hour\n",ms,mph);
        break;
    case 3:
        printf("\nEnter your speed in Kilometres per hour : ");
        scanf("%f",&kmph);
        ms=kmph/3.6;
        printf("\n%f Kilometres per hour = %.3f Metres per second\n",kmph,ms);
        break;
    case 4:
        printf("\nEnter your speed in Kilometres per hour : ");
        scanf("%f",&kmph);
        mph=kmph/1.609;
        printf("\n%f Kilometres per hour = %.3f Miles per hour\n",kmph,mph);
        break;
    case 5:
        printf("\nEnter your speed in Miles per hour : ");
        scanf("%f",&mph);
        ms=mph/2.237;
        printf("\n%f Miles per hour = %.3f Metres per second\n",mph,ms);
        break;
    case 6:
        printf("\nEnter your speed in Miles per hour : ");
        scanf("%f",&mph);
        kmph=mph/1.609;
        printf("\n%f Miles per hour = %.3f Kilometers per second\n",mph,kmph);
        break;
    default:
        printf("\nThe category selected is not yet included. Sorry for the inconvenience.");
        break;
    }
    return 0;
}
int time()
{
    float sec,min,hour;
    int ch6;
    printf("\nThe selected category is TIME");
    printf("\nAvailable options in TIME : ");
    printf("\n1.Seconds to Minutes\n2.Seconds to hours\n3.Minutes to Seconds");
    printf("\n4.Minutes to Hours\n5.Hours to Seconds\n6.Hours to Minutes");
    printf("\nPlease choose your option : ");
    scanf("%d",&ch6);
    switch(ch6)
    {
    case 1:
        printf("\nEnter your time in Seconds : ");
        scanf("%f",&sec);
        min=sec/60;
        printf("\n%f Seconds = %.3f Minutes\n",sec,min);
        break;
    case 2:
        printf("\nEnter your time in Seconds : ");
        scanf("%f",&sec);
        hour=sec/3600;
        printf("\n%f Seconds = %.3f Hours\n",sec,hour);
        break;
    case 3:
        printf("\nEnter your time in Minutes : ");
        scanf("%f",&min);
        sec=min*60;
        printf("\n%f Minutes = %.3f Seconds\n",min,sec);
        break;
    case 4:
        printf("\nEnter your time in Minutes : ");
        scanf("%f",&min);
        hour=min/60;
        printf("\n%f Minutes = %.3f Hours\n",min,hour);
        break;
    case 5:
        printf("\nEnter your time in Hours : ");
        scanf("%f",&hour);
        sec=hour*3600;
        printf("\n%f Hours = %.3f Seconds\n",hour,sec);
        break;
    case 6:
        printf("\nEnter your time in Hours : ");
        scanf("%f",&hour);
        min=hour*60;
        printf("\n%f Hours = %.3f Minutes\n",hour,min);
        break;
    default:
        printf("\nThe category selected is not yet included. Sorry for the inconvenience.");
        break;
    }
    return 0;
}
int liquid(){
    float ml,cl,lit;
    int ch7;
    printf("\n The selected category is weight of liquid");
    printf("\nAvailable options in weight of liquid:");
    printf("\n1.Millilitre to centilitre\n2.Millilitre to litre\n3.centilitre to Millilitre");
    printf("\n4.centilitre to litre\n5.litre to centilitre\n6.litre to Millilitre");
    printf("\nPlease choose your option : ");
    scanf("%d",&ch7);
    switch(ch7)
    {
    case 1:
        printf("\nEnter your liquid weight in Millilitre:");
        scanf("%f",&ml);
        cl=ml/10;
        printf("\n%f Millilitre=%.3f centilitre\n",ml,cl);
        break;
    case 2:
        printf("\nEnter your liquid weight in Millilitre:");
        scanf("%f",&ml);
        lit=ml/1000;
        printf("\n%f Millilitre=%.3f litre\n",ml,lit);
        break;
    case 3:
        printf("\nEnter your liquid weight in centilitre:");
        scanf("%f",&cl);
        ml=cl*10;
        printf("\n%f centilitre=%.3f Millilitre\n",cl,ml);
        break;
    case 4:
        printf("\nEnter your liquid weight in centilitre:");
        scanf("%f",&cl);
        lit=cl/100;
        printf("\n%f centilitre=%.3f litre\n",cl,lit);
        break;
    case 5:
        printf("\nEnter your liquid weight in litre:");
        scanf("%f",&lit);
        cl=lit*100;
        printf("\n%f litre=%.3f centilitre\n",lit,cl);
        break;
    case 6:
        printf("\nEnter your liquid weight in litre:");
        scanf("%f",&lit);
        ml=lit*1000;
        printf("\n%f litre=%.3f millilitre\n",lit,ml);
        break;
    default:
        printf("\nThe category selected is not yet included. Sorry for the inconvenience.");
        break;
    }
    return 0;

}
