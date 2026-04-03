%struct.cB0 = type { i32 }
@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @v1(i8* %0) {
  %2 = alloca i8*
  %3 = alloca %struct.cB0
  store i8* %0, i8** %2
  call void @llvm.memset.p0i8.i64(i8* align 4 %5, i8 0, i64 4, i1 false)
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = getelementptr inbounds %struct.cB0, %struct.cB0* %3, i32 0, i32 0
  %9 = load i32, i32* %8
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %7, i64 %10
  %12 = load i8, i8* %11
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %14, label %18
14:
  %15 = getelementptr inbounds %struct.cB0, %struct.cB0* %3, i32 0, i32 0
  %16 = load i32, i32* %15
  %17 = add nsw i32 %16, 1
  store i32 %17, i32* %15
  br label %6
18:
  %19 = getelementptr inbounds %struct.cB0, %struct.cB0* %3, i32 0, i32 0
  %20 = load i32, i32* %19
  ret i32 %20
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @v1(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
