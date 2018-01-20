#include <AFMotor.h> // Подключаем библиотеку для работы с шилдом 
#include "Arduino.h"
#include "MAK1.h"


AF_DCMotor motor1(1);// Подключаем моторы к клеммникам M1
AF_DCMotor motor2(2);// Подключаем моторы к клеммникам M2
AF_DCMotor motor3(3);// Подключаем моторы к клеммникам M3
AF_DCMotor motor4(4);// Подключаем моторы к клеммникам M4

AF_DCMotor motors[4] = {motor1, motor2, motor3, motor4};


void MAK1::initialize()
{
  for (int i = 0; i < 4; i++) {
    motors[i].setSpeed(255);// Задаем максимальную скорость вращения моторов
    motors[i].run(RELEASE);
  }
}


void MAK1::stop()
{
  for (int i = 0; i < 4; i++) {
    motors[i].run(RELEASE); // Останавливаем двигатели
  }
}


void MAK1::left(int angle)
{
  int i;
  for (i = 0; i < 2; i++) {
    motors[i].run(FORWARD); // Задаем движение вперед
    motors[i].setSpeed(150); // Задаем скорость движения
  }
  for (i = 2; i < 4; i++) {
    motors[i].run(BACKWARD); // Задаем движение назад
    motors[i].setSpeed(150); // Задаем скорость движения
  }

  int koef = 5;
  int flaw_offset = 90;

  delay(angle * koef + flaw_offset); // Указываем время движения

  stop();
}


void MAK1::right(int angle)
{
  int i;
  for (i = 0; i < 2; i++) {
    motors[i].run(BACKWARD); // Задаем движение назад
    motors[i].setSpeed(150); // Задаем скорость движения
  }
  for (i = 2; i < 4; i++) {
    motors[i].run(FORWARD); // Задаем движение вперед
    motors[i].setSpeed(150); // Задаем скорость движения
  }

  int koef = 5;
  int flaw_offset = 90;

  delay(angle * koef + flaw_offset); // Указываем время движения

  stop();
}


void MAK1::forward(int cm)
{
  for (int i = 0; i < 4; i++) {
    motors[i].run(FORWARD); // Задаем движение вперед
    motors[i].setSpeed(150); // Задаем скорость движения
  }

  int koef = 27;
  int flaw_offset = 90;

  delay(cm * koef + flaw_offset); // Указываем время движения

  stop();
}


void MAK1::backward(int cm)
{
  for (int i = 0; i < 4; i++) {
    motors[i].run(BACKWARD); // Задаем движение назад
    motors[i].setSpeed(150); // Задаем скорость движения
  }

  int koef = 27;
  int flaw_offset = 90;

  delay(cm * koef + flaw_offset); // Указываем время движения

  stop();
}
