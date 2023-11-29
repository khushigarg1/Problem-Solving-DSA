/*-----------------files input/output in cpp----------------*/
/*
1. what is file?
    it is a pattern jisko store krk rkh dya gya h disk me
2. we can read any file in binary language means  ye ek pattern h koi sa b prgrm ab    ASCII value ko use krnge 
or apn  kisi prsn ko call pr sirf islye decode krnge binary me sirf taar (wire) se transfer krne k lye  is estreem ki help se data ko bhej skte hai
3. we kn that computer binary language ko smjta h sirf vo bas switches k through cnnect hota usko on or off kr skte
4. file in cpp----> info h jo 0,1 m store h 
                                        _________________________________
                                        |                               |
                                    !-->|           FILES               | ____
                 ___________        |   |_______________________________|     |     _____________
                | CAN WRITE |       |                                         |     |CAN READ TO |
                |TO THE FILE|       |                                         |     |  THE FILE  |
                |___________|       |                                         |     |____________|
                                    |    _________________________________    |
                                    |    |                                |   |
                                    |____|         c++ program            |<--|
                                         | _______________________________|
                __________________                       |              ^          __________________
                |                 |                      |              |         |                  |
                | COUT<<-CAN PRINT|                      |              |         | CIN>> - CAN BE   |
                | ON SCREEN using |                      |              |         |   USED TO INPUT  |
                |      out        |                      |              |         |__________________|
                |_________________|              ________V_________     |
                                                |                  |    |           _________________
                                                |  CONSOLE OUTPUT  |    |          |                 |
                                                |  SCREEN/MONITOR  |    |__________| CONSOLE OUTPUT  |
                                                |__________________|               |    KEYBOARD     |
                                                                                   |_________________|

    input stream se data prgrm k andr jayga 
    or output stream se data file ki trf hga like hard disk        

*/