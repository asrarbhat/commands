import React, { Component } from 'react';
class App extends Component {
  state={
    count:1,
  }
  render() { 
    return (<React.Fragment>
      <h1>{this.state.count}</h1>
      <button onClick={()=>{this.state.count++;this.setState(this.state)}}>increase</button>
      </React.Fragment>
    );
  }
}
 
export default App;

