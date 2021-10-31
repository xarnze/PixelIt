import Vue from 'vue'
import VueRouter from 'vue-router'
import Home from '../views/Home.vue'
import Options from '../views/Options.vue'
import TestArea from '../views/TestArea.vue'
import Update from '../views/Update.vue'

Vue.use(VueRouter)

const routes = [{
        path: '/',
        name: 'Home',
        component: Home
    },
    {
        path: '/options',
        name: 'Options',
        component: Options
    },
    {
        path: '/testarea',
        name: 'TestArea',
        component: TestArea
    },
    {
        path: '/update',
        name: 'Update',
        component: Update
    },
]

const router = new VueRouter({
    routes
})

export default router