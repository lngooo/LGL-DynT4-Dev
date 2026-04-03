@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [4 x i8] c"%s\0A\00"
define dso_local void @StrCompress(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [1024 x i8]
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %2
  call void @llvm.memset.p0i8.i64(i8* align 16 %10, i8 0, i64 1024, i1 false)
  %12 = load i8*, i8** %2
  %13 = call i64 @strlen(i8* %12)
  %14 = trunc i64 %13 to i32
  store i32 %14, i32* %4
  store i32 1, i32* %5
  store i32 0, i32* %6
  %17 = load i32, i32* %4
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %19, label %20
19:
  store i32 1, i32* %7
  br label %73
20:
  store i32 0, i32* %8
  br label %22
22:
  %23 = load i32, i32* %8
  %24 = load i32, i32* %4
  %25 = icmp slt i32 %23, %24
  br i1 %25, label %28, label %26
26:
  store i32 2, i32* %7
  br label %70
28:
  %29 = load i32, i32* %8
  %30 = add nsw i32 %29, 1
  %31 = load i32, i32* %4
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %33, label %51
33:
  %34 = load i8*, i8** %2
  %35 = load i32, i32* %8
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %34, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = load i8*, i8** %2
  %41 = load i32, i32* %8
  %42 = add nsw i32 %41, 1
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8, i8* %40, i64 %43
  %45 = load i8, i8* %44
  %46 = sext i8 %45 to i32
  %47 = icmp eq i32 %39, %46
  br i1 %47, label %48, label %51
48:
  %49 = load i32, i32* %5
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %5
  br label %66
51:
  %52 = getelementptr inbounds [1024 x i8], [1024 x i8]* %3, i64 0, i64 0
  %53 = load i32, i32* %6
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %52, i64 %54
  %56 = load i8*, i8** %2
  %57 = load i32, i32* %8
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i8, i8* %56, i64 %58
  %60 = load i8, i8* %59
  %61 = sext i8 %60 to i32
  %62 = load i32, i32* %5
  %63 = call i32 (i8*, i8*, ...) @sprintf(i8* %55, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %61, i32 %62)
  %64 = load i32, i32* %6
  %65 = add nsw i32 %64, %63
  store i32 %65, i32* %6
  store i32 1, i32* %5
  br label %66
66:
  br label %67
67:
  %68 = load i32, i32* %8
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %8
  br label %22
70:
  %71 = getelementptr inbounds [1024 x i8], [1024 x i8]* %3, i64 0, i64 0
  %72 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i8* %71)
  store i32 0, i32* %7
  br label %73
73:
  %78 = load i32, i32* %7
  switch i32 %78, label %80 [
    i32 0, label %79
    i32 1, label %79
  ]
79:
  ret void
80:
  unreachable
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
declare i64 @strlen(i8*)
declare i32 @sprintf(i8*, i8*, ...)
declare i32 @printf(i8*, ...)
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
  br label %13
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @StrCompress(i8* %12)
  store i32 0, i32* %3
  br label %13
13:
  %14 = load i32, i32* %3
  ret i32 %14
}
