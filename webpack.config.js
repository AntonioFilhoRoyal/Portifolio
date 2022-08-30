const path = require('path');

module.exports = {
    mode: 'development',
    entry: './src/main.js',
    output:  {
        path: path.resolve(__dirname, 'public', 'dist'),
        filename: 'webpack.bundle.js'
    },
    module: {
        rules: [{
            test: /\.js$/,
            use: {
                loader: 'babel-loader',
                options: {
                    presets: ['@babel/env']
                }
            }
        },
        {
            test: /\.css$/,
            use: ['style-loader', 'css-loader']
        }]
    }

}