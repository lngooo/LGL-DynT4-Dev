@lL7 = internal global [256 x i32] zeroinitializer
@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Zwm9(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i8*, i8** %4
  %11 = load i32, i32* %6
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %28
16:
  %17 = load i8*, i8** %4
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  %22 = zext i8 %21 to i64
  %23 = getelementptr inbounds [256 x i32], [256 x i32]* @lL7, i64 0, i64 %22
  %24 = load i32, i32* %23
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* %23
  %26 = load i32, i32* %6
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %6
  br label %9
28:
  store i32 0, i32* %6
  br label %29
29:
  %30 = load i8*, i8** %5
  %31 = load i32, i32* %6
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33
  %35 = icmp ne i8 %34, 0
  br i1 %35, label %36, label %48
36:
  %37 = load i8*, i8** %5
  %38 = load i32, i32* %6
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  %41 = load i8, i8* %40
  %42 = zext i8 %41 to i64
  %43 = getelementptr inbounds [256 x i32], [256 x i32]* @lL7, i64 0, i64 %42
  %44 = load i32, i32* %43
  %45 = add nsw i32 %44, -1
  store i32 %45, i32* %43
  %46 = load i32, i32* %6
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %6
  br label %29
48:
  store i32 0, i32* %6
  br label %49
49:
  %50 = load i32, i32* %6
  %51 = icmp slt i32 %50, 256
  br i1 %51, label %52, label %63
52:
  %53 = load i32, i32* %6
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds [256 x i32], [256 x i32]* @lL7, i64 0, i64 %54
  %56 = load i32, i32* %55
  %57 = icmp ne i32 %56, 0
  br i1 %57, label %58, label %59
58:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %70
59:
  br label %60
60:
  %61 = load i32, i32* %6
  %62 = add nsw i32 %61, 1
  store i32 %62, i32* %6
  br label %49
63:
  %64 = load i8*, i8** %4
  %65 = call i64 @strlen(i8* %64)
  %66 = load i8*, i8** %5
  %67 = call i64 @strlen(i8* %66)
  %68 = icmp eq i64 %65, %67
  %69 = zext i1 %68 to i32
  store i32 %69, i32* %3
  store i32 1, i32* %7
  br label %70
70:
  %72 = load i32, i32* %3
  ret i32 %72
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i64 @strlen(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @Zwm9(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
