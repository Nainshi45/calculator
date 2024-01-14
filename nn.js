var result=document.getElementById("result");
function display(number){
    result.value += number;
}
function calculator(){
    
    var finalnum =result.value;
    var finalresult = eval(finalnum);
    result.value = finalresult;
}
function clrs() 
{
    result.value = "";
    
}


