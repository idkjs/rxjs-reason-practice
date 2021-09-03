const path = require("path");
const webpack = require("webpack");
const HtmlWebpackPlugin = require("html-webpack-plugin");
const outputDir = path.join(__dirname, "dist/");

const isProd = process.env.NODE_ENV === "production";

module.exports = {
  mode: isProd ? "production" : "development",
  output: {
    path: outputDir,
    filename: "index.[fullhash].js",
    publicPath: "/",
  },
  plugins: [
    new HtmlWebpackPlugin({
      template: "src/index.html",
    }),
  ],
  devServer: {
    compress: true,
    port: process.env.PORT || 8000,
    historyApiFallback: true
  },
};
