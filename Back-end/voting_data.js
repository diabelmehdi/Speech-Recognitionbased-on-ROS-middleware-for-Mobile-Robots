require("dotenv").config();
const mongoose = require("mongoose");

mongoose.set("debug", true);
mongoose.Promise = global.Promise;
mongoose.connect(process.env.DATABASE);

const db = require("./models");

const users = [
  { username: "username", password: "password" },
  { username: "DIAB", password: "password" },
];

const polls = [
  {
    question: "Which is the best JavaScript framework",
    options: ["Angular", "React", "VueJS"],
  },
  { question: "Who is the best mutant", options: ["Wolverine", "Deadpool"] },
  { question: "Truth or dare", options: ["Truth", "Dare"] },
  { question: "Boolean?", options: ["True", "False"] },
];
