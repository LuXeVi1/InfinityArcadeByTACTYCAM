#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int score;
int lives;
int check_point_score;

char get_input();
void ScoreIncrease();
void LivesDecrease();
void End_screen();

int main(){
    init();

}

void init(){
    score = 0;
    lives = 3;
    check_point_score = 10;
}

//  get_input function รับค่าการกดแป้น
char get_input(){
    char ch = 0;
    // ใช้กับ header conio.h
    // kbhit() คำสั่งตรวจสอบการกดแป้น 
    if(kbhit()){ 
        // getch() รับค่าการกดแป้นพิมพ์ ไม่แสดงบนจอ
        ch = getch();
    }
}

// ScoreIncrease function นับคะแนน
void ScoreIncrease() {
    score += check_point_score ;
}

// LiveDecrease function หักชีวิต
void LivesDecrease(){
    lives--;
}

// zeroLives function เช็คชีวิตเป็น 0
int zeroLives(){
    if(lives==0){
        return 1;
    }
    return 0;
}

// End_screen function ปริ้นข้อความขอบคุณหลังเล่นเกม
void End_screen(){
    printf("Thank you for playing.");
}




