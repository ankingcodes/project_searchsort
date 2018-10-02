//to create a menu-driven program for operations on arrays
#include<stdio.h>
#include<stdlib.h>
void linear_search(int array[], int n);
void binary_search(int array[],int n);
void bubble_sort(int array[],int n);
void selection_sort(int array[],int n);
void insertion_sort(int array[],int n);
void insertion_element(int array[],int n);
void deletion_element(int array[],int n);
void main()
{
  int n,i,arr[10],choice,ch=1;
  printf("\n Enter the total number of elements: ");
  scanf("%d",&n);
      //accessing the elements
        for(i=0;i<n;i++)
        {
          printf("Arr[%d]= ",i);
          scanf("%d",&arr[i]);
        }
       while(ch==1)
       {
        printf("\n 1. Linear Search");
        printf("\n 2. Binary Search");
        printf("\n 3. Bubble Sort");
        printf("\n 4. Selection Sort");
        printf("\n 5. Insertion Sort");
        printf("\n 6. Insert an Element");
        printf("\n 7. Delete an Element");

        printf("\n Enter your choice: ");
        scanf("%d",&choice);
  //switch case

  switch(choice)
  {
    case 1: linear_search(arr,n);
    break;

    case 2: binary_search(arr,n);
    break;

    case 3: bubble_sort(arr,n);
    break;

    case 4: selection_sort(arr,n);
    break;

    case 5: insertion_sort(arr,n);
    break;

    case 6: insertion_element(arr,n);
    break;

    case 7: deletion_element(arr,n);
    break;
  }
  printf("\n Do you wish to continue: Type 0 or 1:");
  scanf("%d",&ch);
}
}


//program for linear search
void linear_search(int array[],int n)
{
  int val,pos,i,l;
  printf("Enter the value to be searched: ");
  scanf("%d",&val);

    for(i=0;i<n;i++)
    {
      if(val==array[i])
      {
        pos=i;
        printf("\n The position of the element is: %d",pos);
        printf("\n Element is present");

        break;
      }
    }

    if(i==n)
    printf("Element not present");

}

//program for binary search
void binary_search(int array[], int n)
{
  int beg=0,end,add,val,mid,pos,l;
  printf("Enter the value to be searched: ");
  scanf("%d",&val);
  end=n-1;
  while(beg<=end)
  {
    add=beg+end;
    mid=add/2;

      if(val==array[mid])
        {
          pos=mid;
          printf("\n Element Present");
          printf("\n The position of the element is %d",pos);
          exit(0);
        }
      else if(val>array[mid])
        beg=mid+1;
      else
        end=mid-1;
  }
      if(beg>end)
        printf("\n Element not found");

}

//program for bubble sort
void bubble_sort(int array[],int n)
{
  int i,j,temp,l;
  //loops for bubble sort
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(array[j]>array[j+1])
        {
          temp=array[j];
          array[j]=array[j+1];
          array[j+1]=temp;
        }
    }

  }

    printf("\n The sorted array is : ");
    //loop for printing the sorted array.
    for(i=0;i<n;i++)
      {
        printf("\t %d",array[i]);
      }

}

//program for selection sort
void selection_sort(int array[],int n)
{
  int i,j,temp,l;
//loops for selection sort

  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(array[i]>array[j])
      {
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
      }
    }
  }
    printf("\n The sorted array is : ");
    //loop for printing the sorted array.
    for(i=0;i<n;i++)
      {
        printf("\t %d",array[i]);
      }

  }

//program for Insertion sort
void insertion_sort(int array[],int n)
{
  int i,j,temp,l;

  //loops for sorting
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j>0;j--)
    {
      if(array[j]<array[j-1])
      {
        temp=array[j-1];
        array[j-1]=array[j];
        array[j]=temp;
      }
    }
  }
  printf("\n The sorted array is : ");
  //loop for printing the sorted array.
  for(i=0;i<n;i++)
    {
      printf("\t %d",array[i]);
    }
}

//program for inserting an element
void insertion_element(int array[],int n)
{
  int i,pos,val,l;

    printf("\n Enter the element to be inserted: ");
    scanf("%d",&val);
    printf("\n Enter the position for element insertion: ");
    scanf("%d",&pos);

      for(i=n;i>=pos;i--)
        {
          array[i]=array[i-1];
        }

        array[pos]=val;
        n=n+1;

    printf("The array after insertion is: ");
    for(i=0;i<n;i++)
    {
      printf("\t %d",array[i]);
    }

}

//program for deletion of elements
void deletion_element(int array[],int n)
{
  int i,pos,val,l;

  printf("\n Enter the element to be deleted: ");
  scanf("%d",&val);
  printf("\n Enter the position for element deletion: ");
  scanf("%d",&pos);

    for(i=pos;i<n-1;i++)
    {
      array[i]=array[i+1];
    }

    n=n-1;

    printf("The array after deletion is: ");
    for(i=0;i<n;i++)
    {
      printf("\t %d",array[i]);
    }

}
