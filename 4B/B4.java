public class B4 extends Thread

{

public static void main(String []args)

{

Thread1 t1 = new Thread1();

Thread2 t2 = new Thread2();

B4 tm = new B4();







tm.start();

t1.start();

t2.start();

}

public void run()

{

for(int i=0;i<=30;i=i+2)

{

System.out.println("Even: "+i);

}

}

}



class Thread1 extends Thread

{

public void run()

{

for(int i=1;i<=31;i=i+2)

{

System.out.println("Odd: "+i);

}

}

}













class Thread2 extends Thread

{

public void run()

{

for(int i=2;i<100;i++)

{

int count = 0;

for(int j=2;j<i;j++)

{

if(i%j==0)

{

count++;

}

}

if(count==0)

System.out.println("Prime: "+i);

}

}

}
