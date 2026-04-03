@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @TrimSpace(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  %7 = load i8*, i8** %2
  %8 = call i64 @strlen(i8* %7)
  %9 = trunc i64 %8 to i32
  store i32 %9, i32* %4
  br label %10
10:
  %11 = load i8*, i8** %2
  %12 = load i32, i32* %3
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %17, label %52
17:
  %18 = call i16** @__ctype_b_loc()
  %19 = load i16*, i16** %18
  %20 = load i8*, i8** %2
  %21 = load i32, i32* %3
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  %25 = zext i8 %24 to i32
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i16, i16* %19, i64 %26
  %28 = load i16, i16* %27
  %29 = zext i16 %28 to i32
  %30 = and i32 %29, 8192
  %31 = icmp ne i32 %30, 0
  br i1 %31, label %32, label %48
32:
  %33 = load i8*, i8** %2
  %34 = load i32, i32* %3
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  %37 = load i8*, i8** %2
  %38 = load i32, i32* %3
  %39 = add nsw i32 %38, 1
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %37, i64 %40
  %42 = load i32, i32* %4
  %43 = load i32, i32* %3
  %44 = sub nsw i32 %42, %43
  %45 = sext i32 %44 to i64
  call void @llvm.memmove.p0i8.p0i8.i64(i8* align 1 %36, i8* align 1 %41, i64 %45, i1 false)
  %46 = load i32, i32* %4
  %47 = add nsw i32 %46, -1
  store i32 %47, i32* %4
  br label %51
48:
  %49 = load i32, i32* %3
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %3
  br label %51
51:
  br label %10
52:
  ret void
}
declare i64 @strlen(i8*)
declare i16** @__ctype_b_loc()
declare void @llvm.memmove.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1 immarg)
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
  br label %17
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @TrimSpace(i8* %12)
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %15)
  store i32 0, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
declare i32 @printf(i8*, ...)
