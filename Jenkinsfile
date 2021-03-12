pipeline {
    agent { dockerfile true }
    stages {
        stage('Build') {
            steps {
                sh 'echo "Building..."'
                sh 'chmod +x scripts/compile.sh'
                sh 'sh scripts/compile.sh'
            }
        }
        stage('Run') {
            steps {
                sh 'echo "Running..."'
                sh 'chmod +x scripts/run.sh'
                sh 'sh scripts/run.sh'
            }
        }
        stage('Test') {
            steps {
                sh 'echo "Testing..."'
                sh 'chmod +x scripts/test.sh'
                sh 'sh scripts/test.sh'
            }
        }
    }
    post {
        always {
            archiveArtifacts artifacts: 'build/**/*', fingerprint: true
             junit 'build/reports/*.xml'
        }
    }
}