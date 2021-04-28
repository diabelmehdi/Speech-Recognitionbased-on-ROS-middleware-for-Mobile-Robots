import React from "react";
import api from "../services/api";

class App extends React.Component {
  componentDidMount() {
    const result = api.call("post", "auth/login", {
      username: "username",
      password: "password",
    });
    console.log(result);
  }
  render() {
    return <div>App Works</div>;
  }
}
export default App;
