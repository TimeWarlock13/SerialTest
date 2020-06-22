#define WAIT_TIME           (1000) // [ms]
int num=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  if(num%15==0){
    printf("%d : %s\n",num,"FizzBuzz");
  }else if(num%3==0){
    printf("%d : %s\n",num,"Buzz");
  }else if(num%5==0){
    printf("%d : %s\n",num,"Fizz");
  }else{
    printf("%d \n",num);
  }
  // put your main code here, to run repeatedly:
  if(num==100){
    num=0;
    }
  num++;
  delay(WAIT_TIME);
  
}
