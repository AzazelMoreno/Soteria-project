  // Continuous
            var Observable = require("FuseJS/Observable");
            var GeoLocation = require("FuseJS/GeoLocation");

            // var continuousLocation = Observable("");
            // // checks to see if the location changes
            // GeoLocation.onChanged = function(location) {
            //     // current location
            //     continuousLocation.value = JSON.stringify(location);
            //       console.log("It is working");
            // };

             function maybe (){
             var immediateLocation = (GeoLocation.location);
             var long = (immediateLocation.longitude)
             var lat = (immediateLocation.latitude)
            
             console.log(long);
             console.log(lat);

             var intervalMs = 1000;
             var desiredAccuracyInMeters = 10;
             GeoLocation.startListening(intervalMs,desiredAccuracyInMeters);

             var timer = setTimeout(maybe, 7000);

            module.exports = {

                immediateLocation: immediateLocation,
                long: long,
                lat: lat,
                };

            };
        maybe();





            // function startContinuousListener() {
            //     // how frequently it checks to see if location changes
            //     var intervalMs = 1000;  
            //     // how accurate
            //     var desiredAccuracyInMeters = 10;
            //     // start
            //     GeoLocation.startListening(intervalMs, desiredAccuracyInMeters);
            // }

            // startContinuousListener();
            // module.exports = {

            //     long: long,
            //     lat: lat

            //     // continuousLocation: continuousLocation,

            //     // startContinuousListener: startContinuousListener,
            // };