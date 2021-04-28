const mongoose = require("mongoose");

mongoose.set("debug", true);
mongoose.Promise = global.Promise;
mongoose.connect("mongodb://localhost/Polls");

module.exports.User = require("./user");
module.exports.Poll = require("./poll");