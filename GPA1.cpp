void solutionRPM(long long int rpm, int &years, long long int &finalRPM) {

   
    
    years = 0;
   
   finalRPM = rpm * 8;
   
   while (years < 10) {
       
       years++;
       
       int ax[100];
       int i = 0;
       
       while (rpm > 10) {
           
           ax[i] = rpm % 10;
           rpm /= 10;
           i++;
           
       }
       ax[i] = rpm;
       long long int sum = 0;
       
       for (int j = 0; j <= i; j++) {
           
           sum += ax[j] * ax[j];
    
       }
       
       sum *= 323;
       sum = sum + ax[2] * 10 + ax[1];
       rpm = sum;
       
       if (rpm > finalRPM) {
           finalRPM = rpm;
           break;
       } else if (years == 10) finalRPM = rpm;
       
   }

}
