/*==============================================================================
Copyright (c) 2010-2014 Qualcomm Connected Experiences, Inc.
All Rights Reserved.
Confidential and Proprietary - Qualcomm Connected Experiences, Inc.
==============================================================================*/

using UnityEngine;

namespace Vuforia
{
    /// <summary>
    /// A custom handler that implements the ITrackableEventHandler interface.
    /// </summary>
    public class DefaultTrackableEventHandler : MonoBehaviour,
                                                ITrackableEventHandler
    {
        #region PRIVATE_MEMBER_VARIABLES
 
        private TrackableBehaviour mTrackableBehaviour;
    
        #endregion // PRIVATE_MEMBER_VARIABLES



        #region UNTIY_MONOBEHAVIOUR_METHODS
    
        void Start()
        {
            mTrackableBehaviour = GetComponent<TrackableBehaviour>();
            if (mTrackableBehaviour)
            {
                mTrackableBehaviour.RegisterTrackableEventHandler(this);
            }
        }

        #endregion // UNTIY_MONOBEHAVIOUR_METHODS



        #region PUBLIC_METHODS

        /// <summary>
        /// Implementation of the ITrackableEventHandler function called when the
        /// tracking state changes.
        /// </summary>
        public void OnTrackableStateChanged(
                                        TrackableBehaviour.Status previousStatus,
                                        TrackableBehaviour.Status newStatus)
        {
            if (newStatus == TrackableBehaviour.Status.DETECTED ||
                newStatus == TrackableBehaviour.Status.TRACKED ||
                newStatus == TrackableBehaviour.Status.EXTENDED_TRACKED)
            {
                OnTrackingFound();
            }
            else
            {
                OnTrackingLost();
            }
        }

        #endregion // PUBLIC_METHODS



        #region PRIVATE_METHODS


        private void OnTrackingFound()
        {
            Renderer[] rendererComponents = GetComponentsInChildren<Renderer>(true);
            Collider[] colliderComponents = GetComponentsInChildren<Collider>(true);

            // Enable rendering:
            foreach (Renderer component in rendererComponents)
            {
                component.enabled = true;
            }

            // Enable colliders:
            foreach (Collider component in colliderComponents)
            {
                component.enabled = true;
            }

			if (Application.loadedLevelName == "SchoolBag"){
				GameObject.Find("Manager").GetComponent<PagesController>().book = gameObject.GetComponent<Cover>().bookName;
			}

			if (Application.loadedLevelName == "Chemistry"){
	            Debug.Log("Trackable " + mTrackableBehaviour.TrackableName + " found");
				GameObject.Find("SceneControl").GetComponent<ChemistryControl>().activePage = gameObject.GetComponent<ChemistryPage>();
				GameObject.Find("SceneControl").GetComponent<ChemistryControl>().pageNum = gameObject.GetComponent<ChemistryPage>().pageNum;
				GameObject.Find("SceneControl").GetComponent<HandEmulator>()._PAGE = gameObject.GetComponent<ChemistryPage>();
				//gameObject.GetComponent<ChemistryPage>().Detected();
			}

        }


        private void OnTrackingLost()
        {
            Renderer[] rendererComponents = GetComponentsInChildren<Renderer>(true);
            Collider[] colliderComponents = GetComponentsInChildren<Collider>(true);

            // Disable rendering:
            foreach (Renderer component in rendererComponents)
            {
                component.enabled = false;
            }

            // Disable colliders:
            foreach (Collider component in colliderComponents)
            {
                component.enabled = false;
            }

            Debug.Log("Trackable " + mTrackableBehaviour.TrackableName + " lost");

			if (Application.loadedLevelName == "Chemistry"){
				GameObject.Find("SceneControl").GetComponent<ChemistryControl>().activePage = null;
				//gameObject.GetComponent<ChemistryControl>().pageNum = -1;
				GameObject.Find("SceneControl").GetComponent<HandEmulator>()._PAGE = null;
				//gameObject.GetComponent<Page>().LostDetect();
			}
        }

        #endregion // PRIVATE_METHODS
    }
}
