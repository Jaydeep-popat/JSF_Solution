# JavaScript Frameworks Lab Manual Solutions

This repository contains comprehensive solutions for the JavaScript Frameworks lab manual. It covers essential concepts and practical implementations of modern JavaScript frameworks and libraries.

## 📚 Table of Contents

- [Overview](#overview)
- [Lab Topics](#lab-topics)
- [Directory Structure](#directory-structure)
- [Getting Started](#getting-started)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Running the Labs](#running-the-labs)
- [Lab Solutions](#lab-solutions)
- [Contributing](#contributing)
- [License](#license)

## Overview

This repository provides step-by-step solutions to JavaScript Frameworks lab assignments. Each lab includes:
- Complete, working code implementations
- Detailed explanations of key concepts
- Best practices and optimization tips
- Sample outputs and expected results

## Lab Topics

The lab manual covers the following areas:

- **Basics of JavaScript** - Variables, functions, scope, closures
- **ES6+ Features** - Arrow functions, destructuring, spread operator, async/await
- **DOM Manipulation** - Selecting, modifying, and handling events
- **Asynchronous JavaScript** - Callbacks, Promises, async/await
- **React Fundamentals** - Components, JSX, props, state, hooks
- **Vue.js Basics** - Templates, directives, lifecycle hooks
- **Angular Essentials** - Components, services, dependency injection
- **State Management** - Context API, Redux, Vuex
- **API Integration** - Fetch API, Axios, REST endpoints
- **Performance & Debugging** - Optimization techniques, DevTools

## Directory Structure

```
JSF_Solution/
├── README.md
├── lab-01-basics/
│   ├── solution.js
│   ├── index.html
│   └── explanation.md
├── lab-02-es6-features/
│   ├── solution.js
│   └── explanation.md
├── lab-03-dom-manipulation/
│   ├── solution.js
│   ├── index.html
│   └── style.css
├── lab-04-async-javascript/
│   ├── solution.js
│   └── explanation.md
├── lab-05-react/
│   ├── src/
│   ├── package.json
│   └── README.md
├── lab-06-vue/
│   ├── src/
│   ├── package.json
│   └── README.md
├── lab-07-angular/
│   ├── src/
│   ├── package.json
│   └── README.md
└── lab-08-advanced-topics/
    ├── solution.js
    └── explanation.md
```

## Getting Started

### Prerequisites

Ensure you have the following installed on your system:

- **Node.js** (v14.0 or higher) - [Download](https://nodejs.org/)
- **npm** (comes with Node.js) or **yarn**
- **Git** - [Download](https://git-scm.com/)
- A code editor (VS Code recommended) - [Download](https://code.visualstudio.com/)

### Installation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/Jaydeep-popat/JSF_Solution.git
   cd JSF_Solution
   ```

2. **Navigate to a specific lab:**
   ```bash
   cd lab-XX-topic-name
   ```

3. **For framework labs (React, Vue, Angular):**
   ```bash
   npm install
   ```

## Running the Labs

### For HTML/JavaScript Labs:
1. Open the `index.html` file in your browser
2. View the browser console (F12) to see output
3. Interact with the page to see the solution in action

### For Node.js Labs:
```bash
node solution.js
```

### For Framework Labs:
```bash
npm start
```

This will start a development server (typically on `http://localhost:3000`)

## Lab Solutions

Each lab folder contains:

- **solution.js** - The main solution code
- **index.html** - HTML markup (if applicable)
- **style.css** - Styling (if applicable)
- **explanation.md** - Detailed explanation of the solution
- **package.json** - Dependencies and scripts (for framework labs)

### Quick Navigation

| Lab | Topic | Framework/Technology |
|-----|-------|----------------------|
| 01 | Basics of JavaScript | Vanilla JS |
| 02 | ES6+ Features | Vanilla JS |
| 03 | DOM Manipulation | Vanilla JS |
| 04 | Asynchronous JavaScript | Vanilla JS |
| 05 | React Fundamentals | React |
| 06 | Vue.js Basics | Vue.js |
| 07 | Angular Essentials | Angular |
| 08 | Advanced Topics | Mixed |

## Key Concepts

### Vanilla JavaScript
- Function declarations, expressions, and arrow functions
- Closures and scope
- Event listeners and delegation
- Promise-based async patterns

### Modern Frameworks
- Component-based architecture
- State management
- Virtual DOM and reactivity
- Lifecycle management

## Best Practices

- Always review the explanation file for each lab
- Try to solve the problem before checking the solution
- Modify and experiment with the code
- Test edge cases and error scenarios
- Comment your code for clarity

## Testing

To run tests (if available):
```bash
npm test
```

## Common Issues & Troubleshooting

**Issue: Port already in use**
- Solution: Change the port in the development config or stop the conflicting process

**Issue: Dependencies not installing**
- Solution: Delete `node_modules` and `package-lock.json`, then run `npm install` again

**Issue: Module not found**
- Solution: Ensure you're in the correct lab directory and have run `npm install`

## Resources

- [MDN Web Docs](https://developer.mozilla.org/)
- [JavaScript.info](https://javascript.info/)
- [React Documentation](https://react.dev/)
- [Vue.js Guide](https://vuejs.org/guide/)
- [Angular Documentation](https://angular.io/docs)

## Contributing

If you find bugs or have suggestions:
1. Create an issue on GitHub
2. Fork the repository
3. Create a feature branch (`git checkout -b feature/improvement`)
4. Commit your changes (`git commit -m 'Add improvement'`)
5. Push to the branch (`git push origin feature/improvement`)
6. Open a Pull Request

## Author

**Jaydeep Popat**
- GitHub: [@Jaydeep-popat](https://github.com/Jaydeep-popat)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## Version History

- **v1.0.0** - Initial repository setup with comprehensive README
- (Updates will be added as new labs are completed)

---

**Last Updated:** November 2025

For questions or support, please open an issue on the GitHub repository.
