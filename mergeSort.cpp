private void mergesort(int[] a, int lo, int hi)
{
  if (hi <= lo) return;
  int mid = lo + (hi - lo) / 2;
  mergesort(a, lo, mid);
  mergesort(a, mid + 1, hi);
  for (int k = lo; k <= mid; k++)
     b[k - lo] = a[k];
  for (int k = mid + 1; k <= hi; k++)
    c[k-mid-1] = a[k];
  
