clear
sum=0
i=1
echo " Enter one no."
read n1
echo "Enter second no."
read n2
while [ $i = 1 ]
do
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.Division"
echo "Enter your choice"
read ch
case $ch in
1)sum=`expr $n1 + $n2`
echo "Sum ="$sum;;
2)sum=`expr $n1 - $n2`
echo "Difference = "$sum;;
3)sum=`expr $n1 \* $n2`
echo "Product = "$sum;;
4)sum=`expr $n1 / $n2`
echo "Quotient = "$sum;;
*)echo "Invalid choice";;
esac
echo "Do you want to continue ?"
echo "1. Yes	2. No\n"
read i
if [ $i != 1 ]
then
echo "Thank you for using."
exit
fi
done
