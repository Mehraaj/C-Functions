    import java.util.Random;
    import java.util.Timer;

    public class HelloWorld {
        public static void main(String args [] ){
	
            int dice=0;
            int location=0;
            int location2=0;
            Random r= new Random(); 
            dice=r.nextInt(30)+1;
              location=r.nextInt(4)+1;
              location2=r.nextInt(4)+1;

            System.out.print(dice+ "\n");


            if(dice == 1 || dice == 2 || dice==3)

            {
                System.out.print("");
            }
                else if(dice==4|| dice==5|| dice==6)

                {
                    System.out.print("");
                }


                else if(dice==7||dice==8||dice==9)

                {
                    System.out.print("");
                }

                else if (dice == 10||dice==11||dice==12||dice==13||dice==14||dice==15||dice==16)

                {
                    System.out.print("");
                }

                else if(dice==17||dice==18||dice==19||dice==20||dice==21||dice==22||dice==23)

                {
                    System.out.print("");
                }

                else if (dice==24||dice==25||dice==26||dice==27||dice==28||dice==29||dice==30)

                {
                    System.out.print("");
                }

                while (location==location2)
                {
                     location2=r.nextInt(4)+1;
                }
            System.out.print(location+"\n");
            System.out.print(location2+"\n");

        }


    /*    if (location==1)
        {
            ;
        }
        else if (location ==2)
        {
            ;
        }
        else if (location==3)
        {
            ;
        }
    else if(location==4)
    {
        ;
    }


         if (location2==1)
        {
            ;
        }
        else if (location2 ==2)
        {
            ;
        }
        else if (location2==3)
        {
            ;
        }
    else if(location2==4)
    {
        ;
    }*/

        TimerTask task = new TimerTask() {
        public void run() {
	final BlockingDequeue<Integer> queue = new LinkedBlockingDequeue<Integer> ();
            queue.put(dice=r.nextInt(30)+1);
            // or use whatever method you chose to generate the number...
        }
    };
	scheduler.scheduleAtFixedRate dice(task dice, 0, 7, SECONDS dice;)