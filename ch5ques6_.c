// Write a program to find the range of a set of numbers entered through the keyboard. Range is the difference between the smallest and biggest number in the list.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
typedef struct node
{
    int data;
    struct node *next;
}dataTypeNode;


//using linked list for the task

// declared head as a global variable
dataTypeNode  headnode={0,NULL};
dataTypeNode * head = &headnode;






int input(dataTypeNode * number)
{
    if(scanf("%d",&number->data)==1)

    /*"&" is required in this because 
    the data in the structure is of int type
    and scanf directly puts value in it*/


    {   
        return number->data;
    }
    else
    {   
         printf("\n\ninvalid input\n\n");
         exit(0);
    }
}
// use the format--   int ram = input(&ram);







dataTypeNode * nodecreate(dataTypeNode * localHead)
{
    dataTypeNode * newnode  = (dataTypeNode *)(malloc(sizeof(dataTypeNode)));
    //memory allocated for new node
    dataTypeNode * temp=localHead;
     while(temp!=NULL)
    {
        temp=temp->next;
    }
    if(localHead->next==NULL)
    {
        
        
        
        localHead->next=newnode;
        printf("enter (data) upcoming number");
        newnode->data=(int)input((newnode));
        newnode->next=NULL;
    }
    else
    {
        
        //for rest of the linked list
        
        temp->next=newnode;
        printf("enter (data)upcoming number");
        newnode->data=input((newnode));
        newnode->next=NULL;
    }
    return localHead;
    
}







dataTypeNode * FuntionForMax(dataTypeNode * head)
{
    dataTypeNode * temp;
    temp=head;
    int max=INT_MIN;
    dataTypeNode * maxadd =head;

    while(temp->next!=NULL)
    {
        if((temp->data)>max)//max catcher
        {
            max=temp->data;
            maxadd=temp;
        }
        temp=temp->next;
    }

    return maxadd;
}







dataTypeNode * FuntionForMin(dataTypeNode * head)
{
    dataTypeNode * temp;
    temp=head;
    int min=INT_MAX;
    dataTypeNode * minadd=head;

    while(temp->next!=NULL)
    {
        if((temp->data)<min)//min catcher
        {
            min=temp->data;
            minadd=temp;
        }
        temp=temp->next;
    }

    return minadd;
}









int main()
{
    //ask user to input the 

    int counterOfNumberOfInputs=0;
    dataTypeNode * headMain;
    while (1)
        {
            // purpose of this if? 
           
                printf("do you want further numbers? type y/n \n ");
                char inp=getchar();
                if(inp!='y')
                {
                    goto outOfLoop;
                }
                headMain=nodecreate(head); 
                char catch=getchar();
 
        }
        
    outOfLoop:
        dataTypeNode * rangeMax =  FuntionForMax(headMain); 
        dataTypeNode * rangeMin =  FuntionForMin(headMain);
        printf("%d-%d is the range of the list entered",rangeMin->data,rangeMax->data);
        



}