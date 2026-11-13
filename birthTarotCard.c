#include<stdio.h>
#include<stdlib.h>

int digitSum (int n){
int sum = 0;
 while(n>0){
 sum += n%10; //sum is equal to 0 + the remainder of n÷10, that is the last digit.
 n /= 10;
 }
 return sum;
}
int main()
{   int m,d,y;
    printf("Enter your date of birth :- ");
    if(scanf("%d %d %d", &d,&m,&y)==3 && (d<=31 && d>=1 && m>=1 && m<=12 && y>=1)){
    int total = digitSum(d) + digitSum(m) + digitSum(y);
     while(total>22){ 
     total = digitSum(total);
     }
     if (total == 22) { total = 0; }
     const char *tarot[22] = { "The Fool :- The Fool is curious, green, adventurous and spontaneous.", 
     "The Magician :- The Magician is resourceful, confident and makes ideas happen.", 
     "The High Priestess :- The High Priestess is intuitive, calm and private.", 
     "The Empress :- The Empress is nurturing, creative and warm.", 
     "The Emperor:- The Emperor is disciplined, a natural leader and likes structure.", 
     "The Hierophant :- The Hierophant is traditional, a teacher and values learning.", 
     "The Lovers :- The Lovers persona is someone who's driven by values, relationships, and choices.", 
     "The Chariot :- The Chariot persona is someone who's determined, ambitious and wins through willpower. ",
      "Strength :- The Strength persona is patient, brave, gentle but strong.", 
      "The Hermit :- The Hermit is thoughtful, independent and seeks wisdom", 
      "Wheel of Fortune :- The Wheel Of Fortune persona is adaptable, lucky & handles change well.", 
      "Justice :- The justice persona is fair, honest & logical", 
      "The Hanged Man :- The Hanged Man sees things differently, is patient & open-minded.", 
      "Death :- The death persona is transformative, often experiences endings that lead to fresh starts.", 
      "Temperance :- The Temperance persona is balanced & calm, often called a peacemaker.", 
      "The Devil :- The Devil persona is passionate & has strong desires. ", 
      "Tower :- The Tower persona goes through sudden change that leads to growth",
      "Star :- The Star Persona is hopeful, inspiring & healing",
      "Moon :- The Moon persona is imaginative, emotional & intuitive", 
      "Sun :- The Sun persona is joyful, optimistic & energetic",
      "Judgement :- The Judgement persona is  self-aware, reflective & answers a calling",
      "World :- The World persona is complete, accomplished and a global thinker."};
      printf("Your Birth Tarot Card is %s", tarot[total]);
     
    }
    else{
    printf("Enter a valid numeric, non-zero value.");
    }
    return 0;
}
