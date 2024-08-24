// Lcd pinout settings
sbit LCD_RS at RE2_bit;
sbit LCD_EN at RE1_bit;
sbit LCD_D7 at RD7_bit;
sbit LCD_D6 at RD6_bit;
sbit LCD_D5 at RD5_bit;
sbit LCD_D4 at RD4_bit;

// Pin direction
sbit LCD_RS_Direction at TRISE2_bit;
sbit LCD_EN_Direction at TRISE1_bit;
sbit LCD_D7_Direction at TRISD7_bit;
sbit LCD_D6_Direction at TRISD6_bit;
sbit LCD_D5_Direction at TRISD5_bit;
sbit LCD_D4_Direction at TRISD4_bit;

void main() {

int pot1 = 0;
char texto [6];
ADCON1 = 0b00001110;
Lcd_Init();


while(1){
pot1 = ADC_read(0)/10.23;
WordToStr(pot1,texto);
Lcd_Out(2,1,texto);

   if(pot1==0){
   Lcd_Out(1,1,"LCD: MUDO");
   delay_ms(500);
   Lcd_Cmd(_LCD_CLEAR);
   }
   if(pot1>=1 & pot1<=20 ){
   Lcd_Out(1,1,"Volume baixo");
   delay_ms(500);
   Lcd_Cmd(_LCD_CLEAR);
   }
   
   if(pot1>=85 & pot1 <100){
   Lcd_Out(1,1,"Volume alto");
   delay_ms(500);
   Lcd_Cmd(_LCD_CLEAR);
   }
   if(pot1==100){
   Lcd_Out(1,1,"Volume Maximo");
   delay_ms(500);
   Lcd_Cmd(_LCD_CLEAR);
   }
   
}
}