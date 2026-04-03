@__const.rr.jKu1 = constant [2 x i8*] [i8* blockaddress(@rr, %62), i8* blockaddress(@rr, %40)]
define dso_local void @rr(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca [2 x i8*]
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %6
  br label %10
10:
  %11 = load i32, i32* %6
  %12 = load i32, i32* %4
  %13 = sub nsw i32 %12, 1
  %14 = icmp slt i32 %11, %13
  br i1 %14, label %15, label %70
15:
  store i32 0, i32* %7
  br label %16
16:
  %17 = load i32, i32* %7
  %18 = load i32, i32* %4
  %19 = load i32, i32* %6
  %20 = sub nsw i32 %18, %19
  %21 = sub nsw i32 %20, 1
  %22 = icmp slt i32 %17, %21
  br i1 %22, label %23, label %66
23:
  %24 = load i32*, i32** %3
  %25 = load i32, i32* %7
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  %28 = load i32, i32* %27
  %29 = load i32*, i32** %3
  %30 = load i32, i32* %7
  %31 = add nsw i32 %30, 1
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %29, i64 %32
  %34 = load i32, i32* %33
  %35 = icmp sgt i32 %28, %34
  %36 = zext i1 %35 to i32
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds [2 x i8*], [2 x i8*]* %5, i64 0, i64 %37
  %39 = load i8*, i8** %38
  br label %71
40:
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %7
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  store i32 %45, i32* %8
  %46 = load i32*, i32** %3
  %47 = load i32, i32* %7
  %48 = add nsw i32 %47, 1
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %46, i64 %49
  %51 = load i32, i32* %50
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %7
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  store i32 %51, i32* %55
  %56 = load i32, i32* %8
  %57 = load i32*, i32** %3
  %58 = load i32, i32* %7
  %59 = add nsw i32 %58, 1
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %57, i64 %60
  store i32 %56, i32* %61
  br label %62
62:
  br label %63
63:
  %64 = load i32, i32* %7
  %65 = add nsw i32 %64, 1
  store i32 %65, i32* %7
  br label %16
66:
  br label %67
67:
  %68 = load i32, i32* %6
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %6
  br label %10
70:
  ret void
71:
  %72 = phi i8* [ %39, %23 ]
  indirectbr i8* %72, [label %62, label %40]
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
