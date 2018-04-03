
var express = require('express');
var app = express();
var server = require('http').createServer(app);
var io = require('socket.io')(server);
var port = process.env.PORT || 8080;
var SerialPort = require('serialport');
var serialVal;

const Readline = SerialPort.parsers.Readline; 

const parser = mySerialPort.pipe(new Readline({ delimiter: '\n' })); 

parser.on('data', dataToSerialVal); 


function dataToSerialVal(data){
 	serialVal= data.toString();
 	console.log(serialVal);
 }


server.listen(port, function(){
	console.log('Server listening on ' + port);
});

io.on('connection',function(client){
	console.log('Socket connected...');
	client.emit('messages', {serialValue: serialVal});//inital value
	client.on('getSerialVal', function(){
		client.emit('messages', {serialValue: serialVal});

	});

});

app.use(express.static(".")); 

app.get('/', function(req,res){
	console.log('serving index.html');
	res.sendFile(__dirname + '/index.html');

});

