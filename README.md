
# react-native-gymnastics-gz-practice

## Getting started

`$ npm install react-native-gymnastics-gz-practice --save`

### Mostly automatic installation

`$ react-native link react-native-gymnastics-gz-practice`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-native-gymnastics-gz-practice` and add `RNGymnasticsGzPractice.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNGymnasticsGzPractice.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<

#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import com.reactlibrary.RNGymnasticsGzPracticePackage;` to the imports at the top of the file
  - Add `new RNGymnasticsGzPracticePackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-native-gymnastics-gz-practice'
  	project(':react-native-gymnastics-gz-practice').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-native-gymnastics-gz-practice/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-native-gymnastics-gz-practice')
  	```

#### Windows
[Read it! :D](https://github.com/ReactWindows/react-native)

1. In Visual Studio add the `RNGymnasticsGzPractice.sln` in `node_modules/react-native-gymnastics-gz-practice/windows/RNGymnasticsGzPractice.sln` folder to their solution, reference from their app.
2. Open up your `MainPage.cs` app
  - Add `using Gymnastics.Gz.Practice.RNGymnasticsGzPractice;` to the usings at the top of the file
  - Add `new RNGymnasticsGzPracticePackage()` to the `List<IReactPackage>` returned by the `Packages` method


## Usage
```javascript
import RNGymnasticsGzPractice from 'react-native-gymnastics-gz-practice';

// TODO: What to do with the module?
RNGymnasticsGzPractice;
```
  