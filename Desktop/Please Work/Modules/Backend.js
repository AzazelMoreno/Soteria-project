var observable = require("FuseJS/Observable");
var GeoLocation = require("FuseJS/GeoLocation");

//Continuous
var continuousLocation = GeoLocation.observe("changed");

GeoLocation.on("error", function(fail){
  console.log("GeoLocation error" + fail);
});

function listener(){
  var intervalMS = 1000;
  var desireAccuracyInMeter = 10;
  GeoLocation.startListening(intervalMS, desireAccuracyInMeter);
}
listener();


module.exports = {
  locale: continuousLocation,
  listener: listener
}