
#include <Arduino.h>
#include <stdlib.h>
void Select_Seg(int i); //选择写入位
void DigitalToHPLD(int i); //显示四位数字
void CharDis(char character); //
void DLprint(int i);//字符打印，超过4个字符就滚动显示
void DLprint(String s);
void Test();//测试
void DLWrite(int i6, int i5, int i4, int i3, int i2, int i1, int i0); //控制引脚以写数据
void DLrollDigi(int i);