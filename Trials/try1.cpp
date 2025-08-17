#include<simplecpp>
#include<string>

main_program{
    initCanvas();

    vector<string> abc;
    abc.push_back("100");
    abc.push_back("101 ada");
    abc.push_back("102");

    cout<<abc[0]<<endl;
    cout<<abc[1]<<endl;
    cout<<abc[2]<<endl;
    /*XEvent event;
    nextEvent(event);

    if(mouseButtonPressEvent(event)){
        cout<<"Mouse Button "<<event.xbutton.button<<"pressed, at position("<<event.xbutton.x<<","<<event.xbutton.y<<")"<<endl;
    }*/
    Text Life_value(256,256, "3");
    wait(2);
    Text Life_value(256,256,"hi");

    wait(3);



}
