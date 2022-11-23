#!/usr/bin/node
const request = require('request');
const index = process.argv[2];
request('https://swapi-api.hbtn.io/api/films/'+index, function (error, response, body) {
const link_array = JSON.parse(response.body).characters;
for(i=0; i<link_array.length; i++)
{
request(link_array[i], function(error, response, body){
console.log(JSON.parse(response.body).name);
});
}
});
