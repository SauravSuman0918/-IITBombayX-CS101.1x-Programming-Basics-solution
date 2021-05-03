struct rational {
   int numerator;
   int denominator;
};



/*Question: Reduce the number 'inputrational' to its lowest form and store it in 'outputrational'
struct rational *inputrational  : Actual rational number to be reduced
struct rational *outputrational : Variable to store the rational number in its lowest form */
void reduce(struct rational *inputrational, struct rational *outputrational) {
    //Write your solution code below this line
int n,m,i=2,min;
     n=inputrational->numerator;
     m=inputrational->denominator;
     min=n>m?m:n;
     for(i=m;i>0;i--){
          if(n%i==0 && m%i==0){
             n=n/i;
            m=m/i;
            break;
            }
        }

    outputrational->numerator=n;
    outputrational->denominator=m;


}

/* Question: Check whether both the rational numbers obtained in the lowest form are equal or not. 
             Retrun true or false accordingly
*/
bool isEqual(struct rational num1, struct rational num2) {
    //Write your solution code below this line
    if (num1.numerator/num1.denominator == num2.numerator/num2.denominator)
  {
    return true;
  }
  else
  {
    return false;
  }

}
