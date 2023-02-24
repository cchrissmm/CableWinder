#ifndef INTERFACE_H
#define INTERFACE_H

/*during harness design, 
    -a unique identifier 
    -the wrap start position (mm)
    -number of static wraps at start
    -number static wraps at end 
    -the length of the harness (mm)
    -wrap end position (mm)
    -contents (which cables). 
    -wrap medium (cloth, tape, etc)
    -wrap overlap (mm travel per rotation)
    -start termination type 
    -end termination type
    */

//there is a limit switch at the start of the carriage (0mm) 

//the designer places this data into a table that the system references.

//the operator can select a harness from the table, he cannot change the table parameters (wrap start position, length, contents)

//the operator screens are
//-Screen: choose harness, then parameters are displayed for review
//-create ad hoc cable by manually entering the parameters
//-button go to cable load pos
//-button go to wrap start pos
//-button start tape attachment (slow three rotations)
//-if tape is attached ok, button to run
//  -button pause
//  -button abort


class interface {
public:

//operator functiosn
void goToLoadPos();
void goToWrapStartPosition();
void chooseHarness(int harnessNumber);
void startProduction();
void pause();
void abort();

void setWrapStartPosition(int wrapStartPosition);

const int LOADPOSITION = 100; // teh position the head goes to to allow the operator to load the cablle, hard coded
int UNWRAPPED_LENGTH; //the operator selectable length of unwrapped cable 
};

#endif