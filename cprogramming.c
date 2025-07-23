 //WRITE A PROGRAM TO CREATE,READ, WRITE AND APPEND DATA TO A FILE 

 #include <stdio.h>
 #include <stdlib.h>
 int main(){

    FILE*fptr;     //file pointer 

    //creating a file using write mode 
    fptr = fopen("fileoperation.txt","w");

    //checking if the file is created or not 
    if(fptr==NULL){
        printf("the file is not opened or does not exist\n ");
    }
    else {
        printf("the file is created\n");
    }

    //writting in file
    char data[100]= "The fopen() function is used to open the file. \n The fclose() function is used to close the file.";
    
    fprintf(fptr,data);  //writting data into the file using puts function 
    fprintf(fptr,"\n");

    fclose(fptr);     //closing the file  

    //read 
    char para[50] ;
    fptr = fopen("fileoperation.txt","r");   //opening file in read mode
    if(fptr==NULL){
        printf("the file is not opened.\n ");
    }
    else {
        printf("the file is opened\n");
        while (fgets(para,50, fptr)!= NULL) {     //reading from the file
            
            printf("%s", para);                   //printing the data
        }
    }
    fclose(fptr);

    //append

    fptr=fopen("fileoperation.txt","a") ;        //opening file in append mode
    if(fptr==NULL){
        printf("file not open or does not exist");

    }
    else{
        fprintf(fptr,"this is third line and this is appended\n");   //appending new line 
    }
    while (fgets(para,50,fptr)!= NULL ){
        printf("%s",para);                                           
    }
    fclose(fptr);   

    return 0;
 }

 
