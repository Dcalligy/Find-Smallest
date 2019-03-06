# Practice Exercise 10

Modify the find_smallest function so that it uses pointer arithmetic - not subscripting - to visit array elements. 

## Original find_smallest function
```
int *find_smallest(int arr[], int n){
  int i; 
  int *p_min = &arr[0];
  for(i = 1; i < n; i++){
    if(arr[i] < *p_min){
      p_min = &arr[i];
    }
  }
  return p_min;
}
```
