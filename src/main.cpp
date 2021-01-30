#include <Arduino.h>
int test;
void setup() 
{
  Serial.begin(9600);
}

boolean validatePassword(String password)
{
  int valid;
  int numbers;
  unsigned int Length = password.length();//Get string length 

  if(Length>=8)//Check if string length is greater than 7
  {
    valid++;
  }

  for(int i; i<8;i++)//Check if string has more than 1 number
  {
    if((password[i]>47)&&(password[i]<59))
    {
      numbers++;
      if (numbers>=2)
      {
       valid++;
      }
    }

    if(((password[i]>=48)&&(password[i]<=59))//Check if string is only alphabetic
    ||((password[i]>=56)&&(password[i]<=89))
    ||((password[i]>=97)&&(password[i]<=122)))
    {
      valid++;
    }
  }
  
  if(valid==3)//Return 1 if all 3 condition has been met
  {
    return true;
  }
}

void loop()
{
  Serial.println("Password: abc123");
  test=validatePassword("abc123");
  Serial.println(test);

  Serial.println("Password: password");
  test=validatePassword("password");
  Serial.println(test);

  Serial.println("Password: GreetingsFe11owKids");
  test=validatePassword("GreetingsFe11owKids");
  Serial.println(test);
}