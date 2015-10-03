typedef float TYP;

void QuickSort(TYP *T, int Lo, int Hi)
{
   int i,j;
   TYP x;
   x = T[(Lo+Hi)>>1];       //można wylosować element dzielący, np: x=T[rand%(Hi-Lo)+Lo+1], dzięki temu zabezpieczymy się dość skutecznie przed ukwadratowieniem.
   i = Lo;
   j = Hi;
   do
   {
