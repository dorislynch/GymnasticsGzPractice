using ReactNative.Bridge;
using System;
using System.Collections.Generic;
using Windows.ApplicationModel.Core;
using Windows.UI.Core;

namespace Gymnastics.Gz.Practice.RNGymnasticsGzPractice
{
    /// <summary>
    /// A module that allows JS to share data.
    /// </summary>
    class RNGymnasticsGzPracticeModule : NativeModuleBase
    {
        /// <summary>
        /// Instantiates the <see cref="RNGymnasticsGzPracticeModule"/>.
        /// </summary>
        internal RNGymnasticsGzPracticeModule()
        {

        }

        /// <summary>
        /// The name of the native module.
        /// </summary>
        public override string Name
        {
            get
            {
                return "RNGymnasticsGzPractice";
            }
        }
    }
}
