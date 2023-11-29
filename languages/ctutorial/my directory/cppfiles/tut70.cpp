/*
STL = containers  -> object which stores data 
    + algo        -> procedure to process data
    + iterators   -> object which points to an element of a container

CONTAINERS TYPES
1. -> sequence containers   -> linear fashion me data ko store krte hai ( vectors , lists , double ended queue )   *-*-*-* linear
2. -> associated containers -> ye kuch is trh se design kye jate ki apnko faster access mil ske elements ka           *
                            -> direct access  ( map , multimap , dictionary )                                        *  *
                            -> fast searching , fast deletion , fast insertion                                      * * *   tree
3. -> derived containers    -> real words modelling  ( queue )
                            -> stack , queue , priority queue 

Q. when to use which ?
sequence containers 
1. vectors -> Random Access = fast
           -> insertion / deletion in middle= slow
           -> del/insertion at the end fast 
2. list  -> random access = slow
         -> del/insertion in middle = fast
         
associative containers -> all operations fast except random access

derived containers -> depends -> data structure 

*/      