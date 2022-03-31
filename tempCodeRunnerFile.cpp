if(pos>=size+1)
  {
      cout<<"element can't be deleted!";
  }
  else{
  for (i =pos-1;i<size-1;i++)
      arr[i]=arr[i+1];
  