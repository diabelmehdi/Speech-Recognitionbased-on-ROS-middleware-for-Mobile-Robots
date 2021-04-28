/// allow us to create a private variables
require("dotenv").config();
const express = require("express");
const cors = require("cors");
const bodyParser = require("body-parser");

const handle = require("./handlers");
const app = express();
// we want to hide our Port
const port = process.env.PORT;

app.use(cors());
app.use(bodyParser.json());

app.get("/", (req, res) => {
  res.json({ hello: "World" });
});
app.use(handle.notFound);

app.use(handle.errors);

app.listen(port, () => console.log(`Server listening on port ${port}`));
