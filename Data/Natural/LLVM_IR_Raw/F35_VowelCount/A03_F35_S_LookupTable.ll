@VowelCount.table = internal global [256 x i32] zeroinitializer
@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @VowelCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @VowelCount.table, i64 0, i64 117)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @VowelCount.table, i64 0, i64 111)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @VowelCount.table, i64 0, i64 105)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @VowelCount.table, i64 0, i64 101)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @VowelCount.table, i64 0, i64 97)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @VowelCount.table, i64 0, i64 85)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @VowelCount.table, i64 0, i64 79)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @VowelCount.table, i64 0, i64 73)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @VowelCount.table, i64 0, i64 69)
  store i32 1, i32* getelementptr inbounds ([256 x i32], [256 x i32]* @VowelCount.table, i64 0, i64 65)
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i8, i8* %6
  %8 = icmp ne i8 %7, 0
  br i1 %8, label %9, label %23
9:
  %10 = load i8*, i8** %2
  %11 = load i8, i8* %10
  %12 = zext i8 %11 to i64
  %13 = getelementptr inbounds [256 x i32], [256 x i32]* @VowelCount.table, i64 0, i64 %12
  %14 = load i32, i32* %13
  %15 = icmp ne i32 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %3
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %3
  br label %19
19:
  br label %20
20:
  %21 = load i8*, i8** %2
  %22 = getelementptr inbounds i8, i8* %21, i32 1
  store i8* %22, i8** %2
  br label %5
23:
  %24 = load i32, i32* %3
  ret i32 %24
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %10
8:
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0))
  store i32 0, i32* %3
  br label %16
10:
  %11 = load i8**, i8*** %5
  %12 = getelementptr inbounds i8*, i8** %11, i64 1
  %13 = load i8*, i8** %12
  %14 = call i32 @VowelCount(i8* %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
