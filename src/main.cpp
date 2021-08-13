//FOR DLO1414 TEST

/*
   Link mode
   H0-H6   D2-D8
   HA0 D9
   HA1 D10
   WR A0
*/
#include <main.h>
#define H0 2
#define H1 3
#define H2 4
#define H3 5
#define H4 6
#define H5 7
#define H6 8
#define WR A0
#define HA0 9
#define HA1 10
//测试
void Test()
{

  digitalWrite(H4, HIGH);
  digitalWrite(H5, HIGH);
  digitalWrite(H6, LOW);

  Select_Seg(0);
  DLWrite(0, 1, 1, 0, 0, 0, 0);

  Select_Seg(1);
  DLWrite(0, 1, 1, 0, 0, 1, 1);

  Select_Seg(2);
  DLWrite(0, 1, 1, 0, 1, 1, 0);

  Select_Seg(3);
  DLWrite(0, 1, 1, 0, 1, 1, 1);
}

//显示指定数字
void Digitalprint(int i)
{
  switch (i)
  {
  case 0:
    DLWrite(0, 1, 1, 0, 0, 0, 0);
    break;
  case 1:
    DLWrite(0, 1, 1, 0, 0, 0, 1);
    break;
  case 2:
    DLWrite(0, 1, 1, 0, 0, 1, 0);
    break;
  case 3:
    DLWrite(0, 1, 1, 0, 0, 1, 1);
    break;
  case 4:
    DLWrite(0, 1, 1, 0, 1, 0, 0);
    break;
  case 5:
    DLWrite(0, 1, 1, 0, 1, 0, 1);
    break;
  case 6:
    DLWrite(0, 1, 1, 0, 1, 1, 0);
    break;
  case 7:
    DLWrite(0, 1, 1, 0, 1, 1, 1);
    break;
  case 8:
    DLWrite(0, 1, 1, 1, 0, 0, 0);
    break;
  case 9:
    DLWrite(0, 1, 1, 1, 0, 0, 1);
    break;
  default:
    break;
  }
}

void Charprint(char character)
{
  switch (character)
  {
  case '0':
    DLWrite(0, 1, 1, 0, 0, 0, 0);
    break;
  case '1':
    DLWrite(0, 1, 1, 0, 0, 0, 1);
    break;
  case '2':
    DLWrite(0, 1, 1, 0, 0, 1, 0);
    break;
  case '3':
    DLWrite(0, 1, 1, 0, 0, 1, 1);
    break;
  case '4':
    DLWrite(0, 1, 1, 0, 1, 0, 0);
    break;
  case '5':
    DLWrite(0, 1, 1, 0, 1, 0, 1);
    break;
  case '6':
    DLWrite(0, 1, 1, 0, 1, 1, 0);
    break;
  case '7':
    DLWrite(0, 1, 1, 0, 1, 1, 1);
    break;
  case '8':
    DLWrite(0, 1, 1, 1, 0, 0, 0);
    break;
  case '9':
    DLWrite(0, 1, 1, 1, 0, 0, 1);
    break;
  case ':':
    DLWrite(0, 1, 1, 1, 0, 1, 0);
    break;
  case '<':
    DLWrite(0, 1, 1, 1, 1, 0, 0);
    break;
  case '=':
    DLWrite(0, 1, 1, 1, 1, 0, 1);
    break;
  case '>':
    DLWrite(0, 1, 1, 1, 1, 1, 0);
    break;
  case '?':
    DLWrite(0, 1, 1, 1, 1, 1, 1);
    break;

  /*第三行：特殊符号类型*/
  case '￥':
    DLWrite(0, 0, 1, 1, 1, 1, 1);
  case ' ':
    DLWrite(0, 1, 0, 0, 0, 0, 0);
    break;
  case '!':
    DLWrite(0, 1, 0, 0, 0, 0, 1);
    break;
  case '"':
    DLWrite(0, 1, 0, 0, 0, 1, 0);
    break;
  case '#':
    DLWrite(0, 1, 0, 0, 0, 1, 1);
    break;
  case '$':
    DLWrite(0, 1, 0, 0, 1, 0, 0);
    break;
  case '%':
    DLWrite(0, 1, 0, 0, 1, 0, 1);
    break;
  case '&':
    DLWrite(0, 1, 0, 0, 1, 1, 0);
    break;
  case '(':
    DLWrite(0, 1, 0, 1, 0, 0, 0);
    break;
  case ')':
    DLWrite(0, 1, 0, 1, 0, 0, 1);
    break;

  case '*':
    DLWrite(0, 1, 0, 1, 0, 1, 0);
    break;
  case '+':
    DLWrite(0, 1, 0, 1, 0, 1, 1);
    break;
  case ',':
    DLWrite(0, 1, 0, 1, 1, 0, 0);
    break;
  case '-':
    DLWrite(0, 1, 0, 1, 1, 0, 1);
    break;
  case '.':
    DLWrite(0, 1, 0, 1, 1, 1, 0);
    break;

  case 'A':
    DLWrite(1, 0, 0, 0, 0, 0, 1);
    break;

  case 'B':
    DLWrite(1, 0, 0, 0, 0, 0, 1);
    break;
  case 'C':
    DLWrite(1, 0, 0, 0, 0, 1, 0);
    break;
  case 'D':
    DLWrite(1, 0, 0, 0, 0, 1, 1);
    break;
  case 'E':
    DLWrite(1, 0, 0, 0, 1, 0, 0);
    break;
  case 'F':
    DLWrite(1, 0, 0, 0, 1, 0, 1);
    break;
  case 'G':
    DLWrite(1, 0, 0, 0, 1, 1, 0);
    break;
  case 'H':
    DLWrite(1, 0, 0, 0, 1, 1, 1);
    break;
  case 'I':
    DLWrite(1, 0, 0, 1, 0, 0, 1);
    break;
  case 'J':
    DLWrite(1, 0, 0, 1, 0, 1, 0);
    break;
  case 'K':
    DLWrite(1, 0, 0, 1, 0, 1, 1);
    break;
  case 'L':
    DLWrite(1, 0, 0, 1, 1, 0, 0);
    break;
  case 'M':
    DLWrite(1, 0, 0, 1, 1, 0, 1);
    break;
  case 'N':
    DLWrite(1, 0, 0, 1, 1, 1, 0);
    break;
  case 'O':
    DLWrite(1, 0, 0, 1, 1, 1, 1);
    break;
  //----第六行
  case 'P':
    DLWrite(1, 0, 1, 0, 0, 0, 0);
    break;
  case 'Q':
    DLWrite(1, 0, 1, 0, 0, 0, 1);
    break;
  case 'R':
    DLWrite(1, 0, 1, 0, 0, 1, 0);
    break;
  case 'S':
    DLWrite(1, 0, 1, 0, 0, 1, 1);
    break;
  case 'T':
    DLWrite(1, 0, 1, 0, 1, 0, 0);
    break;
  case 'U':
    DLWrite(1, 0, 1, 0, 1, 0, 1);
    break;
  case 'V':
    DLWrite(1, 0, 1, 0, 1, 1, 0);
    break;
  case 'W':
    DLWrite(1, 0, 1, 0, 1, 1, 1);
    break;
  case 'X':
    DLWrite(1, 0, 1, 1, 0, 0, 0);
    break;
  case 'Y':
    DLWrite(1, 0, 1, 1, 0, 0, 1);
    break;
  case 'Z':
    DLWrite(1, 0, 1, 1, 0, 1, 0);
    break;
  case '[':
    DLWrite(1, 0, 1, 1, 0, 1, 1);
    break;
  case '\\':
    DLWrite(1, 0, 1, 1, 1, 0, 0);
    break;
  case ']':
    DLWrite(1, 0, 1, 1, 1, 0, 1);
    break;
  case '^':
    DLWrite(1, 0, 1, 1, 1, 1, 0);
    break;
  case '_':
    DLWrite(1, 0, 1, 1, 1, 1, 1);
    break;
//第七行
  case '`':
    DLWrite(1, 1, 0, 0, 0, 0, 0);
    break;
  case 'a':
    DLWrite(1, 1, 0, 0, 0, 0, 1);
    break;
  case 'b':
    DLWrite(1, 1, 0, 0, 0, 1, 0);
    break;
  case 'c':
    DLWrite(1, 1, 0, 0, 0, 1, 1);
    break;
  case 'd':
    DLWrite(1, 1, 0, 0, 1, 0, 0);
    break;
  case 'e':
    DLWrite(1, 1, 0, 0, 1, 0, 1);
    break;
  case 'f':
    DLWrite(1, 1, 0, 0, 1, 1, 0);
    break;
  case 'g':
    DLWrite(1, 1, 0, 0, 1, 1, 1);
    break;
  case 'h':
    DLWrite(1, 1, 0, 1, 0, 0, 0);
    break;
  case 'i':
    DLWrite(1, 1, 0, 1, 0, 0, 1);
    break;
  case 'j':
    DLWrite(1, 1, 0, 1, 0, 1, 0);
    break;
  case 'k':
    DLWrite(1, 1, 0, 1, 0, 1, 1);
    break;
  case 'l':
    DLWrite(1, 1, 0, 1, 1, 0, 0);
    break;
  case 'm':
    DLWrite(1, 1, 0, 1, 1, 0, 1);
    break;
  case 'n':
    DLWrite(1, 1, 0, 1, 1, 1, 0);
    break;
  case 'o':
    DLWrite(1, 1, 0, 1, 1, 1, 1);
    break;
//第八行
  case 'p':
    DLWrite(1, 1, 1, 0, 0, 0, 0);
    break;
  case 'q':
    DLWrite(1, 1, 1, 0, 0, 0, 1);
    break;
  case 'r':
    DLWrite(1, 1, 1, 0, 0, 1, 0);
    break;
  case 's':
    DLWrite(1, 1, 1, 0, 0, 1, 1);
    break;
  case 't':
    DLWrite(1, 1, 1, 0, 1, 0, 0);
    break;
  case 'u':
    DLWrite(1, 1, 1, 0, 1, 0, 1);
    break;
  case 'v':
    DLWrite(1, 1, 1, 0, 1, 1, 0);
    break;
  case 'w':
    DLWrite(1, 1, 1, 0, 1, 1, 1);
    break;
  case 'x':
    DLWrite(1, 1, 1, 1, 0, 0, 0);
    break;
  case 'y':
    DLWrite(1, 1, 1, 1, 0, 0, 1);
    break;
  case 'z':
    DLWrite(1, 1, 1, 1, 0, 1, 0);
    break;
  case '{':
    DLWrite(1, 1, 1, 1, 0, 1, 1);
    break;
  case '：':
    DLWrite(1, 1, 1, 1, 1, 0, 0);
    break;
  case '}':
    DLWrite(1, 1, 1, 1, 1, 0, 1);
    break;
  case '~':
    DLWrite(1, 1, 1, 1, 1, 1, 0);
    break;
   case '€':
    DLWrite(1, 1, 1, 1, 1, 1, 0);
    break;
  default:
    break;
  }
}

//数据显示
void DLWrite(int i6, int i5, int i4, int i3, int i2, int i1, int i0)
{
  digitalWrite(H0, i0);
  digitalWrite(H1, i1);
  digitalWrite(H2, i2);
  digitalWrite(H3, i3);

  digitalWrite(H4, i4);
  digitalWrite(H5, i5);
  digitalWrite(H6, i6);
}

//选择段位
void Select_Seg(int i)
{
  switch (i)
  {
  case 0:

    digitalWrite(HA0, HIGH);
    digitalWrite(HA1, HIGH);
    break;
  case 1:

    digitalWrite(HA0, HIGH);
    digitalWrite(HA1, LOW);
    break;
  case 2:
    digitalWrite(HA0, LOW);
    digitalWrite(HA1, HIGH);
    break;
  case 3:
    digitalWrite(HA1, LOW);
    digitalWrite(HA0, LOW);
    break;
  }
}

//数字到HPDL-1414模块
int lastValue = 0;
void DLprint(int i)
{
  Select_Seg(0);
  Digitalprint((i / 1000) % 10);
  Select_Seg(1);
  Digitalprint((i / 10) % 10);
  Select_Seg(2);
  Digitalprint((i / 100) % 10);
  Select_Seg(3);
  Digitalprint(i % 10);
}
void DLprint(String s)
{
  int i = 0;
  if(s.length()<0)
  {
    return;
  }
  if(s.length()<4)
  {
  Select_Seg(0);
  Charprint(s[0]);

  Select_Seg(1);
  Charprint(s[2]);

  Select_Seg(2);
  Charprint(s[1]);

  Select_Seg(3);
  Charprint(s[3]);

  }
  else
  {
    for(i=0;i<s.length()-3;i++)
    {
  Select_Seg(0);
  Charprint(s[i]);

  Select_Seg(1);
  Charprint(s[i+2]);

  Select_Seg(2);
  Charprint(s[i+1]);

  Select_Seg(3);
  Charprint(s[i+3]);

  delay(400);
    }
    
  }
}
void DLrollDigi(int num)
{
  if(num>9999)
  {
    num=num%10000;
  }
for(int i=0;i<num;i++)
  {
  DLprint(i);
  delay(1);
  }
}
//---------------------------------------------------------------------------//
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A0, OUTPUT);
  for (int i = 2; i <= 10; i++)
  {
    pinMode(i, OUTPUT);
  }
  // digitalWrite(BUZ, HIGH);
  digitalWrite(WR, LOW);
}
void loop()
{

 // DLprint(" 42%");           //test pass
 // DLWrite(0,0,0,0,0,1,0);    //test pass

 // DLprint("sold out now ");  //test pass
  DLrollDigi(random(9)*1000+random(9)*100+random(9)*10+random(9));
  delay(1000);
  
  delay(1000);
   
  
}