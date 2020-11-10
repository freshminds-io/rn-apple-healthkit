const { AppleHealthKit } = require('react-native').NativeModules;

import { Activities, Permissions, Units } from './Constants';

const HealthKit = Object.assign({}, AppleHealthKit, {
  Constants: {
    Permissions,
    Units,
    Activities,
  },
});

export default HealthKit;
module.exports = HealthKit;
